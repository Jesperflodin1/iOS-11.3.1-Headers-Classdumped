/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject {

	ICStoreHLSAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * playlistURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(BOOL)isiTunesStoreStream;
-(NSURL *)playlistURL;
-(id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1 ;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
@end

