#import "KSSAppDelegate.h"
#import "KSSAddAlarmViewController.h"
#import "Alarm.h"
#import "Device.h"

@interface KSSAddAlarmViewController ()
@property (nonatomic, retain) KSSAppDelegate *appDelegate;
@end

@implementation KSSAddAlarmViewController

@synthesize alarm;
@synthesize appDelegate;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    appDelegate = (KSSAppDelegate *)[UIApplication sharedApplication].delegate;
    alarm = (Alarm *)[NSEntityDescription insertNewObjectForEntityForName:@"Alarm" inManagedObjectContext:appDelegate.managedObjectContext];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)cancelAlarm:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (IBAction)saveAlarm:(id)sender {
    
    alarm.time = self.datePicker.date;
    alarm.isSet = @1;
    
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    
    NSDateComponents *alarmComponents = [calendar components:NSYearCalendarUnit|NSMonthCalendarUnit|NSDayCalendarUnit|NSHourCalendarUnit|NSMinuteCalendarUnit fromDate:alarm.time];
    NSDateComponents *nowComponents = [calendar components:NSYearCalendarUnit|NSMonthCalendarUnit|NSDayCalendarUnit fromDate:[NSDate date]];
    
    alarmComponents.year = nowComponents.year;
    alarmComponents.month = nowComponents.month;
    alarmComponents.day = nowComponents.day;
    
    NSDate *newAlarmTime = [calendar dateFromComponents:alarmComponents];
    if ([newAlarmTime compare:[NSDate date]] == NSOrderedAscending) {
        newAlarmTime = [newAlarmTime dateByAddingTimeInterval:60 * 60 * 24 * 1];
    }
    
    alarm.time = newAlarmTime;
    
    [self dismissViewControllerAnimated:YES completion:^{
        [self.delegate addAlarmViewController:self didSaveAlarm:alarm];
    }];
}

- (void)alarmDetailViewController:(KSSAlarmDetailViewController *)controller didChooseDevice:(Device *)device {
    self.alarm.device = device;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"embedEditTableView"]) {
        self.embeddedView = (KSSAlarmDetailViewController *)segue.destinationViewController;
        self.embeddedView.delegate = self;
    }
}

@end
