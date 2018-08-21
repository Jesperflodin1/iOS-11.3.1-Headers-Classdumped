/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class MPPlaceholderAVItem, NSOperationQueue;

@interface MusicQuickPlayQueueFeeder : MPQueueFeeder {

	MPPlaceholderAVItem* _placeholderItem;
	NSOperationQueue* _requestQueue;

}
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)itemCount;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemForIdentifier:(id)arg1 ;
-(void)_beginQuickPlayWithURL:(id)arg1 ;
-(void)_failQueueLoadWithError:(id)arg1 orReason:(id)arg2 ;
@end
