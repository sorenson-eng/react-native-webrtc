#import <AVFoundation/AVFoundation.h>
#import <WebRTC/RTCVideoCapturer.h>
#import "CapturerEventsDelegate.h"

NS_ASSUME_NONNULL_BEGIN

// TODO: abstract/base class if/when more file types need to be supported
@interface FileCapturer : RTCVideoCapturer

@property(nonatomic, weak) id<CapturerEventsDelegate> eventsDelegate;

- (instancetype)initWithDelegate:(__weak id<RTCVideoCapturerDelegate>)delegate asset:(NSString *)asset;
- (void)startCapture;
- (void)stopCapture;

@end

NS_ASSUME_NONNULL_END
