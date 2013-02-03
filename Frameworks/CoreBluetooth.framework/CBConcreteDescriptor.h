/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSNumber, CBConcretePeripheral;

@interface CBConcreteDescriptor : CBDescriptor {
    NSNumber *_handle;
    CBConcretePeripheral *_peripheral;
}

@property(readonly) NSNumber * handle;

- (void)dealloc;
- (id)handle;
- (void)handlePeripheralDisconnection;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 UUID:(id)arg2 peripheral:(id)arg3 handle:(id)arg4;

@end
