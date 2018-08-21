/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylist.h>

@protocol IKJSPlaylist <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@required
-(id)init;
-(unsigned long long)length;
-(id)pop;
-(id)item:(long long)arg1;
-(void)push:(id)arg1;
-(void)setEndAction:(long long)arg1;
-(long long)endAction;
-(id)splice:(long long)arg1 :(long long)arg2 :(id)arg3;

@end


@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {

	IKAppPlaylistBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlaylistBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)pop;
-(id)item:(long long)arg1 ;
-(void)push:(id)arg1 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(id)splice:(long long)arg1 :(long long)arg2 :(id)arg3 ;
-(IKAppPlaylistBridge *)bridge;
@end

