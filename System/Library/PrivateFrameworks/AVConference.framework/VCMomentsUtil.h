/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCMomentsUtil : NSObject
+(OpaqueVTPixelTransferSessionRef)setupTransferSession:(OpaqueVTPixelTransferSessionRef)arg1 ;
+(CVBufferRef)createResizeFrame:(CVBufferRef)arg1 transferSession:(OpaqueVTPixelTransferSessionRef)arg2 bufferPool:(CVPixelBufferPoolRef)arg3 ;
+(int)setupBufferPool:(_CVPixelBufferPool*)arg1 width:(double)arg2 height:(double)arg3 ;
+(BOOL)pixelBufferPool:(CVPixelBufferPoolRef)arg1 matchesWidth:(int)arg2 height:(int)arg3 ;
@end

