/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (readonly) NSArray * devices; 
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
-(id)init;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(int)start;
-(id)internalDevices;
-(BOOL)isBrowsing;
-(NSArray *)devices;
-(void)finalize;
@end

