/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICStoreDialogResponseHandler.h>

@class ATAsset;

@interface ATStoreDownloadDialogResponseHandler : ICStoreDialogResponseHandler {

	ATAsset* _downloadAsset;

}
-(void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)initWithDownloadAsset:(id)arg1 ;
@end

