#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>


@interface KSSGlobalManager : NSObject

@property (nonatomic, retain) CBUUID *lightStateUUID;
@property (nonatomic, retain) CBUUID *serviceUUID;

+ (KSSGlobalManager *)sharedManager;

@end

