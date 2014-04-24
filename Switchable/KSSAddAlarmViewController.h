#import <UIKit/UIKit.h>
#import "KSSAlarmsViewController.h"
@class KSSAddAlarmViewController;

@protocol KSSAddAlarmDelegate <NSObject>

- (void)addAlarmViewController:(KSSAddAlarmViewController *)viewController didSaveAlarm:(Alarm *)alarm;

@end

@interface KSSAddAlarmViewController : UIViewController <KSSAlarmDetailViewControllerDelegate>

@property (nonatomic, retain) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *saveButton;
@property (nonatomic, retain) IBOutlet UIDatePicker *datePicker;
@property (nonatomic, retain) Alarm *alarm;
@property (nonatomic, retain) KSSAlarmDetailViewController *embeddedView;
@property (weak) id <KSSAddAlarmDelegate> delegate;

- (IBAction)cancelAlarm:(id)sender;
- (IBAction)saveAlarm:(id)sender;

@end