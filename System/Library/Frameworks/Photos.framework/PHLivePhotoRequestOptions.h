/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHLivePhotoRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(long long)deliveryMode;
-(BOOL)isNetworkAccessAllowed;
@end

