/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WLKUIJSObject.h>
#import <libobjc.A.dylib/WLKUIMediaEntityExport.h>

@class WLKUIMediaEntityType, NSString, MPMediaEntity;

@interface WLKUIMediaEntity : WLKUIJSObject <WLKUIMediaEntityExport> {

	WLKUIMediaEntityType* _type;
	NSString* _identifier;
	MPMediaEntity* _mediaEntity;

}

@property (nonatomic,retain) WLKUIMediaEntityType * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MPMediaEntity * mediaEntity;              //@synthesize mediaEntity=_mediaEntity - In the implementation block
+(BOOL)parseIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)_mediaEntityTypeForMPMediaEntity:(id)arg1 mediaCategory:(id)arg2 mediaCollectionType:(id)arg3 ;
+(id)_numberForString:(id)arg1 ;
+(id)_stringForNumber:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setType:(WLKUIMediaEntityType *)arg1 ;
-(WLKUIMediaEntityType *)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(MPMediaEntity *)mediaEntity;
-(id)initWithAppContext:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 mediaCategory:(id)arg3 mediaCollectionType:(id)arg4 ;
-(void)setMediaEntity:(MPMediaEntity *)arg1 ;
@end
