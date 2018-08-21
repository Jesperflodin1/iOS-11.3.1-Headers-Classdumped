/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EKDayViewItemPath : NSObject <NSCopying> {

	int _section;
	unsigned long long _index;

}

@property (nonatomic,readonly) int section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)section;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
@end

