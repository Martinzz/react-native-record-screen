#import <React/RCTBridgeModule.h>
#import <ReplayKit/ReplayKit.h>
#import <AVFoundation/AVFoundation.h>

@interface RecordScreen : NSObject <RCTBridgeModule>

    @property (strong, nonatomic) RPScreenRecorder *screenRecorder;
    @property (strong, nonatomic) AVAssetWriterInput *videoInput;
    @property (strong, nonatomic) AVAssetWriterInput *micInput;
    @property (assign, nonatomic) int screenWidth;
    @property (assign, nonatomic) int screenHeight;
    @property (assign, nonatomic) int videoFrameRate;
    @property (assign, nonatomic) int videoBitrate;
    @property (assign, nonatomic) BOOL enableMic;

    @property (nonatomic) AVAssetWriter *writer;
    @property BOOL encounteredFirstBuffer;

@end
