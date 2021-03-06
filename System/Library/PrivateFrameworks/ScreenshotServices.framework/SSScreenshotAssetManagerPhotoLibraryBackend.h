/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSScreenshotAssetManagerBackend.h>

@class NSString;

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerEntryWithImage:(id)arg1 identifierHandler:(/*^block*/id)arg2 ;
-(void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(/*^block*/id)arg2 ;
-(void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeEntryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

