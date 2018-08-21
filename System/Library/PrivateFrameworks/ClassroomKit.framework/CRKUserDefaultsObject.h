/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults;

@interface CRKUserDefaultsObject : NSObject {

	NSString* _key;
	NSUserDefaults* _defaults;

}

@property (nonatomic,readonly) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (retain) id value; 
-(id)init;
-(NSString *)key;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(NSUserDefaults *)defaults;
-(id)initWithKey:(id)arg1 ;
@end

