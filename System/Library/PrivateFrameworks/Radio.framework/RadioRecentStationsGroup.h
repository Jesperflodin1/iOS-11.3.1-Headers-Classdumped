/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying> {

	BOOL _active;
	NSString* _localizedTitle;
	NSArray* _stations;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                 //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stations;                     //@synthesize stations=_stations - In the implementation block
-(NSArray *)stations;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedTitle;
-(id)_copyWithRecentStationsGroupClass:(Class)arg1 ;
@end

