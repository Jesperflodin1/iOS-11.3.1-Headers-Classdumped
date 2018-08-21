/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	BOOL _browsing;
	NSMutableArray* _internalDevices;

}

@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBrowsing) BOOL browsing;                      //@synthesize browsing=_browsing - In the implementation block
@property (retain) NSMutableArray * internalDevices;              //@synthesize internalDevices=_internalDevices - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)internalDevices;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(void)finalize;
@end

