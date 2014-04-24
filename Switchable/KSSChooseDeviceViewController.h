#import <UIKit/UIKit.h>

@class KSSChooseDeviceViewController;

@protocol KSSChooseDeviceDelegate <NSObject>
- (void)chooseDeviceViewController:(KSSChooseDeviceViewController *)viewController didChooseDevice:(Device *)device;
@end


@interface KSSChooseDeviceViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate/*, KSSBluetoothDeviceListDelegate*/>

@property (nonatomic, retain) NSMutableArray *savedArray;
@property (nonatomic, retain) Device *initialDevice;
@property (weak) id <KSSChooseDeviceDelegate> delegate;

@end
