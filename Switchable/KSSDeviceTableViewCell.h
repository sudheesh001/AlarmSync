#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "Device.h"

@interface KSSDeviceTableViewCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UILabel *nameLabel;
@property (nonatomic, retain) IBOutlet UILabel *statusLabel;
@property (nonatomic, retain) NSString *temperature; //TODO remove
@property (nonatomic, retain) Device *device;
@property (nonatomic) BOOL *isConnected;

@end
