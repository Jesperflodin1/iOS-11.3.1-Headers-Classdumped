/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding> {

	BOOL _wantsThumbnailItemData;
	BOOL _wantsAttachmentURLItemData;
	BOOL _isAirDropActivity;
	BOOL _activitySupportsPromiseURLs;
	Class _classForPreparingExtensionItemData;
	NSUUID* _activityUUID;
	NSString* _activityType;
	long long _activityCategory;
	NSString* _extensionIdentifier;
	NSDictionary* _activitySpecificMetadata;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSUUID * activityUUID;                                   //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                    //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) NSString * extensionIdentifier;                          //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isAirDropActivity;                                  //@synthesize isAirDropActivity=_isAirDropActivity - In the implementation block
@property (assign,nonatomic) long long activityCategory;                              //@synthesize activityCategory=_activityCategory - In the implementation block
@property (assign,nonatomic) BOOL wantsThumbnailItemData;                             //@synthesize wantsThumbnailItemData=_wantsThumbnailItemData - In the implementation block
@property (assign,nonatomic) BOOL wantsAttachmentURLItemData;                         //@synthesize wantsAttachmentURLItemData=_wantsAttachmentURLItemData - In the implementation block
@property (assign,nonatomic) BOOL activitySupportsPromiseURLs;                        //@synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs - In the implementation block
@property (nonatomic,retain) NSDictionary * activitySpecificMetadata;                 //@synthesize activitySpecificMetadata=_activitySpecificMetadata - In the implementation block
@property (nonatomic,readonly) Class classForPreparingExtensionItemData;              //@synthesize classForPreparingExtensionItemData=_classForPreparingExtensionItemData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3 ;
+(id)requestForActivity:(id)arg1 activityType:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)activityCategory;
-(NSString *)activityType;
-(NSUUID *)activityUUID;
-(BOOL)isAirDropActivity;
-(CGSize)thumbnailSize;
-(BOOL)wantsThumbnailItemData;
-(BOOL)wantsAttachmentURLItemData;
-(BOOL)activitySupportsPromiseURLs;
-(void)setActivityCategory:(long long)arg1 ;
-(NSString *)extensionIdentifier;
-(Class)classForPreparingExtensionItemData;
-(id)_initWithClassForPreparingExtensionItemData:(Class)arg1 ;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setIsAirDropActivity:(BOOL)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setWantsThumbnailItemData:(BOOL)arg1 ;
-(void)setWantsAttachmentURLItemData:(BOOL)arg1 ;
-(void)setActivitySupportsPromiseURLs:(BOOL)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setActivitySpecificMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)activitySpecificMetadata;
@end

