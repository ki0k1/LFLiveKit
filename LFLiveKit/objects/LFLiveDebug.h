//
//  LFLiveDebug.h
//  LaiFeng
//
//  Created by LaiFeng on 16/5/20.
//  Copyright © 2016年 LaiFeng All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LFLiveDebug : NSObject

@property (nonatomic, copy) NSString *streamId;
@property (nonatomic, copy) NSString *uploadUrl;
@property (nonatomic, assign) CGSize videoSize;
@property (nonatomic, assign) BOOL isRtmp;

@property (nonatomic, assign) CGFloat elapsedMilli;
@property (nonatomic, assign) CGFloat timeStamp;
@property (nonatomic, assign) CGFloat dataFlow;
@property (nonatomic, assign) CGFloat bandwidth;
@property (nonatomic, assign) CGFloat currentBandwidth;
@property (nonatomic, assign) NSInteger currentBitrate;

@property (nonatomic, assign) NSInteger dropFrame;
@property (nonatomic, assign) NSInteger totalFrame;

@property (nonatomic, assign) NSInteger capturedAudioCount;
@property (nonatomic, assign) NSInteger capturedVideoCount;
@property (nonatomic, assign) NSInteger currentCapturedAudioCount;
@property (nonatomic, assign) NSInteger currentCapturedVideoCount;

@property (nonatomic, assign) NSInteger unSendCount;


@end
