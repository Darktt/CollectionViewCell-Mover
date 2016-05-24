//
//  AVCaptureDevice+CaptureDevice.h
//
//  Created by Darktt on 15/12/1.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import AVFoundation.AVCaptureDevice;

NS_ASSUME_NONNULL_BEGIN
@interface AVCaptureDevice (CaptureDevice)

+ (BOOL)hasDeviceWithPosition:(AVCaptureDevicePosition)position NS_SWIFT_NAME(hasDevice(position:));

+ (instancetype)deviceWithMediaType:(NSString *)mediaType preferringPosition:(AVCaptureDevicePosition)position NS_SWIFT_NAME(device(mediaType:preferringPosition:));

@end
NS_ASSUME_NONNULL_END