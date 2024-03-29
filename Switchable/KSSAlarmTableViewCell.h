#import <UIKit/UIKit.h>
#import "Alarm.h"
//#import "KSSAlarmIsSetSwitch.h"

@class KSSAlarmIsSetSwitch;

@interface KSSAlarmTableViewCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UILabel *hoursLabel;
@property (nonatomic, retain) IBOutlet UILabel *colonLabel;
@property (nonatomic, retain) IBOutlet UILabel *minutesLabel;
@property (nonatomic, retain) IBOutlet UILabel *meridiemLabel;
@property (nonatomic, retain) IBOutlet UILabel *deviceLabel;
@property (nonatomic, retain) IBOutlet UISwitch *isSetSwitch;
@property Alarm *alarm;

@end
