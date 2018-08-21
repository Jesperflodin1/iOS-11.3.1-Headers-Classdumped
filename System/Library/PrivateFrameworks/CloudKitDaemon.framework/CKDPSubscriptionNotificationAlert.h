/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {

	NSString* _actionLocKey;
	NSString* _category;
	NSString* _launchImage;
	NSMutableArray* _localizedArguments;
	NSString* _localizedKey;
	NSString* _soundName;
	NSString* _subtitle;
	NSMutableArray* _subtitleLocalizedArguments;
	NSString* _subtitleLocalizedKey;
	NSString* _text;
	NSString* _title;
	NSMutableArray* _titleLocalizedArguments;
	NSString* _titleLocalizedKey;

}

@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedKey; 
@property (nonatomic,retain) NSString * localizedKey;                                  //@synthesize localizedKey=_localizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedArguments;                      //@synthesize localizedArguments=_localizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasActionLocKey; 
@property (nonatomic,retain) NSString * actionLocKey;                                  //@synthesize actionLocKey=_actionLocKey - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchImage; 
@property (nonatomic,retain) NSString * launchImage;                                   //@synthesize launchImage=_launchImage - In the implementation block
@property (nonatomic,readonly) BOOL hasSoundName; 
@property (nonatomic,retain) NSString * soundName;                                     //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleLocalizedKey; 
@property (nonatomic,retain) NSString * titleLocalizedKey;                             //@synthesize titleLocalizedKey=_titleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * titleLocalizedArguments;                 //@synthesize titleLocalizedArguments=_titleLocalizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitleLocalizedKey; 
@property (nonatomic,retain) NSString * subtitleLocalizedKey;                          //@synthesize subtitleLocalizedKey=_subtitleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * subtitleLocalizedArguments;              //@synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments - In the implementation block
+(Class)localizedArgumentsType;
+(Class)titleLocalizedArgumentsType;
+(Class)subtitleLocalizedArgumentsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasText;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(NSString *)soundName;
-(void)setSoundName:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasSubtitle;
-(void)addLocalizedArguments:(id)arg1 ;
-(void)addTitleLocalizedArguments:(id)arg1 ;
-(void)addSubtitleLocalizedArguments:(id)arg1 ;
-(void)setLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)localizedArgumentsCount;
-(void)clearLocalizedArguments;
-(id)localizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setActionLocKey:(NSString *)arg1 ;
-(void)setLaunchImage:(NSString *)arg1 ;
-(void)setTitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)titleLocalizedArgumentsCount;
-(void)clearTitleLocalizedArguments;
-(id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)subtitleLocalizedArgumentsCount;
-(void)clearSubtitleLocalizedArguments;
-(id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocalizedKey;
-(BOOL)hasActionLocKey;
-(BOOL)hasLaunchImage;
-(BOOL)hasSoundName;
-(BOOL)hasTitleLocalizedKey;
-(BOOL)hasSubtitleLocalizedKey;
-(NSString *)localizedKey;
-(NSMutableArray *)localizedArguments;
-(void)setLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)actionLocKey;
-(NSString *)launchImage;
-(NSString *)titleLocalizedKey;
-(NSMutableArray *)titleLocalizedArguments;
-(void)setTitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)subtitleLocalizedKey;
-(NSMutableArray *)subtitleLocalizedArguments;
-(void)setSubtitleLocalizedArguments:(NSMutableArray *)arg1 ;
@end

