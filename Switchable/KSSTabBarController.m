#import "KSSTabBarController.h"

@interface KSSTabBarController ()

@end

@implementation KSSTabBarController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	UITabBarItem *alarmsItem = [self.tabBar.items objectAtIndex:0];
    UITabBarItem *devicesItem = [self.tabBar.items objectAtIndex:1];
    alarmsItem.selectedImage = [UIImage imageNamed:@"AlarmSelectedIcon"];
    devicesItem.selectedImage = [UIImage imageNamed:@"DeviceSelectedIcon"];
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
