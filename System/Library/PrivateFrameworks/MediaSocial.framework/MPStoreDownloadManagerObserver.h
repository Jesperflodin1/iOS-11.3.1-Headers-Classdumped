/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1;

@end

