/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PTSImageLoaderDelegate;
@class NSString;

@interface PTSImageLoader : NSObject {

	NSString* _path;
	BOOL _loading;
	id<PTSImageLoaderDelegate> _delegate;

}

@property (getter=isLoading) BOOL loading;                                            //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) id<PTSImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PTSImageLoaderDelegate>)delegate;
-(void)setDelegate:(id<PTSImageLoaderDelegate>)arg1 ;
-(BOOL)isLoading;
-(void)stopLoading;
-(id)initWithPath:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)startLoading;
@end
