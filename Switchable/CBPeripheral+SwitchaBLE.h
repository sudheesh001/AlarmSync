#import <CoreBluetooth/CoreBluetooth.h>

@interface CBPeripheral (SwitchaBLE)

@property (readonly) CBCharacteristic *lightCharacteristic;

- (CBCharacteristic *)lightCharacteristic;

@end
