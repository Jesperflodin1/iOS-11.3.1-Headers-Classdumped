/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUserDefaults, NSString, NSSet;

@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying> {

	NSUserDefaults* _userDefaults;
	NSString* _domainName;
	NSSet* _stickyKeys;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) NSString * domainName;                        //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,copy) NSSet * stickyKeys;                           //@synthesize stickyKeys=_stickyKeys - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setDomainName:(NSString *)arg1 ;
-(id)initWithUserDefaults:(id)arg1 domainName:(id)arg2 stickyKeys:(id)arg3 ;
-(NSSet *)stickyKeys;
-(void)setStickyKeys:(NSSet *)arg1 ;
-(NSString *)domainName;
@end

