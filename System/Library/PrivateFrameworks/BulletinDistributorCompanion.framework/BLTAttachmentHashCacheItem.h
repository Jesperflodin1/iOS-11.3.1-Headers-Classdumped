/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL;

@interface BLTAttachmentHashCacheItem : NSObject {

	NSData* _MD5;
	NSString* _attachmentIdentifier;
	NSData* _data;
	NSURL* _url;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * attachmentIdentifier;              //@synthesize attachmentIdentifier=_attachmentIdentifier - In the implementation block
+(id)attachmentHashCacheItemWithData:(id)arg1 URL:(id)arg2 attachmentIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)MD5;
-(id)initWithURL:(id)arg1 data:(id)arg2 attachmentIdentifier:(id)arg3 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(void)setAttachmentIdentifier:(NSString *)arg1 ;
-(NSString *)attachmentIdentifier;
@end
