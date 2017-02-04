//
//  LFLiveDebug.m
//  LaiFeng
//
//  Created by LaiFeng on 16/5/20.
//  Copyright © 2016年 LaiFeng All rights reserved.
//

#import "LFLiveDebug.h"

@implementation LFLiveDebug

- (NSString *)description {
    return [NSString stringWithFormat:@"\ndropFrame:%ld \ntotalFrame:%ld \ncapturedACount:%ld \ncapturedVCount:%ld \nunSendCount:%ld \ndataFlow:%0.f \nbitrate:%0ldkb/s",(long)_dropFrame,(long)_totalFrame,(long)_currentCapturedAudioCount,(long)_currentCapturedVideoCount,(long)_unSendCount,_dataFlow, (long)_currentBitrate/1000];
}


@end
