/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@class NSString, NSArray;

@interface NFLPickYourFavoritesTileInfo : NSObject <NFLFeedTileInfo> {

	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _body;
	NSString* _buttonTitle;

}

@property (nonatomic,copy,readonly) NSString * groupIdentifier;                    //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (nonatomic,readonly) BOOL bookmarkable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
-(NSString *)groupIdentifier;
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(NSString *)buttonTitle;
-(unsigned long long)tileInfoType;
-(BOOL)pageable;
-(BOOL)bookmarkable;
-(unsigned long long)bookmarkOffsetType;
-(NSArray *)underlyingFeedElements;
@end

