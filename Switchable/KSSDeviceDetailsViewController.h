#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "KSSBluetoothController.h"
@class Device;
@class KSSDeviceDetailsViewController;

@protocol KSSDeviceDetailsDelegate <NSObject>
- (void)deviceDetailsViewController:(KSSDeviceDetailsViewController *)controller didFinishSavingDevice:(Device *)device;
- (void)deviceDetailsViewController:(KSSDeviceDetailsViewController *)controller didFinishForgettingDevice:(Device *)device;
- (void)deviceDetailsViewController:(KSSDeviceDetailsViewController *)controller didFinishEditingDevice:(Device *)device;
@end

@interface KSSDeviceDetailsViewController : UITableViewController <UIAlertViewDelegate, KSSBluetoothDeviceDelegate, UITextFieldDelegate>

@property (nonatomic, weak) id <KSSDeviceDetailsDelegate> delegate;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UITextField *name;
@property (nonatomic, retain) IBOutlet UITableViewCell *identifyCell;
@property (nonatomic, retain) IBOutlet UITableViewCell *connectionCell;
@property (nonatomic, retain) IBOutlet UITableViewCell *saveOrForgetCell;
@property (nonatomic) Device *device;
@property (nonatomic) BOOL deviceIsSaved;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic, retain) UIAlertView *alert;

- (IBAction)closeView:(id)sender;
- (void)saveDevice:(id)sender;
- (void)forgetDevice:(id)sender;

@end
