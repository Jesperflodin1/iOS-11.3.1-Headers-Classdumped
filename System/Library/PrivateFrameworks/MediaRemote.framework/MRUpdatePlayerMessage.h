/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdatePlayerMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)type;
-(id)initWithPlayerPath:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
@end

