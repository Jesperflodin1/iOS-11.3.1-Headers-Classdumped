/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRLyricsEventProtobuf * event; 
-(unsigned long long)type;
-(_MRLyricsEventProtobuf *)event;
-(id)initWithEvent:(id)arg1 ;
@end

