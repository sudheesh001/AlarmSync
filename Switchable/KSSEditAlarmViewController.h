#import <UIKit/UIKit.h>
#import "Alarm.h"
#import "KSSChooseDeviceViewController.h"
#import "KSSAlarmDetailViewController.h"

@class KSSEditAlarmViewController;

@protocol KSSEditAlarmDelegate <NSObject>

- (void)editAlarmController:(id)controller didFinishEditingAlarm:(Alarm *)alarm;
- (void)editAlarmController:(id)controller didFinishDeletingAlarm:(Alarm *)alarm;

@end

@interface KSSEditAlarmViewController : UIViewController <KSSAlarmDetailViewControllerDelegate>

@property (nonatomic, weak) id <KSSEditAlarmDelegate> delegate;
@property (nonatomic, retain) IBOutlet UIDatePicker *datePicker;
@property (nonatomic, retain) KSSAlarmDetailViewController *embeddedView;
@property Alarm *alarm;

- (IBAction)saveAlarm:(id)sender;
- (IBAction)deleteAlarm:(id)sender;

@end
