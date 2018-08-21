/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject {

	BOOL _isEnabled;
	unsigned long long _identifier;
	NSString* _name;
	NSArray* _supportedTypes;

}

@property (assign) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign) BOOL isEnabled;                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (retain) NSArray * supportedTypes;                   //@synthesize supportedTypes=_supportedTypes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)identifier;
-(BOOL)isEnabled;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setSupportedTypes:(NSArray *)arg1 ;
-(NSArray *)supportedTypes;
@end

