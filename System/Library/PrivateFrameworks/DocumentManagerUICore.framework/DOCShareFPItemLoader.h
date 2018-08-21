/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DOCShareFPItemLoader.h>
@class NSArray;


@protocol DOCShareFPItemLoader <NSObject>
@property (assign,nonatomic,__weak) id<DOCShareFPItemLoaderDelegate> delegate; 
@property (nonatomic,readonly) BOOL loadDidTimeOut; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(id<DOCShareFPItemLoaderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)items;
-(BOOL)loadDidTimeOut;

@end


@protocol DOCShareFPItemLoaderDelegate;
@class NSArray, NSString;

@interface DOCShareFPItemLoader : NSObject <DOCShareFPItemLoader> {

	NSArray* _items;
	BOOL _didFailToLoad;
	BOOL _didTimeOut;
	id<DOCShareFPItemLoaderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DOCShareFPItemLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL loadDidTimeOut;                                         //@synthesize didTimeOut=_didTimeOut - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                             //@synthesize items=_items - In the implementation block
-(void)notifyDelegate;
-(id<DOCShareFPItemLoaderDelegate>)delegate;
-(void)setDelegate:(id<DOCShareFPItemLoaderDelegate>)arg1 ;
-(NSArray *)items;
-(id)initWithURLs:(id)arg1 ;
-(BOOL)loadDidTimeOut;
-(void)startLoadingItemsForURLs:(id)arg1 ;
@end

