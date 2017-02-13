//
//  eStatEnums.h
//  eStatTaggerSDK
//
//  Created by Kevin Delannoy on 8/01/14.
//  Copyright (c) 2014 Tapptic. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger,eStatLoggingMode) {
    eStatLoggingMode_Verbose,
    eStatLoggingMode_Warning,
    eStatLoggingMode_Error,
    eStatLoggingMode_NoLogging
} ;

typedef NS_ENUM(NSUInteger, eStatSendingMode) {
    eStatSendingMode_Compact,
    eStatSendingMode_Full,
    eStatSendingMode_Disconnected
};

typedef NS_ENUM(NSUInteger, eStatStreamingEvent) {
    eStatStreamingEvent_Playing,
    eStatStreamingEvent_Paused,
    eStatStreamingEvent_Stopped,
    estatStreamingEvent_None
};

typedef NS_ENUM(NSUInteger, eStatStreamingType) {
    eStatStreamingType_Replay,
    eStatStreamingType_LiveWithoutTimeshifting,
    eStatStreamingType_LiveWithTimeshifting
};
