#import <UIKit/UIKit.h>
#import "KSSBluetoothController.h"
#import "KSSDeviceDetailsViewController.h"

@interface KSSDevicesViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, KSSBluetoothDeviceListDelegate, KSSDeviceDetailsDelegate>

@property (nonatomic, retain) NSMutableArray *nearbyArray;
@property (nonatomic, retain) NSMutableArray *savedArray;

@end
