/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKMediaManagerDelegate;
#import <OpusKit/OpusKit-Structs.h>
@class NSMutableDictionary;

@interface OKMediaManager : NSObject {

	id<OKMediaManagerDelegate> _delegate;
	NSMutableDictionary* _mediaSourcesByScheme;

}

@property (assign,nonatomic) id<OKMediaManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultManager;
-(id)init;
-(id<OKMediaManagerDelegate>)delegate;
-(void)setDelegate:(id<OKMediaManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mediaItemForURL:(id)arg1 ;
-(id)mediaURLsForMediaObjects:(id)arg1 ;
-(id)mediaURLForMediaObject:(id)arg1 ;
-(id)mediaItemsForURLs:(id)arg1 ;
-(void)addMediaItemClass:(Class)arg1 ;
-(Class)mediaItemClassForURL:(id)arg1 ;
-(void)removeMediaItemClass:(Class)arg1 ;
@end

