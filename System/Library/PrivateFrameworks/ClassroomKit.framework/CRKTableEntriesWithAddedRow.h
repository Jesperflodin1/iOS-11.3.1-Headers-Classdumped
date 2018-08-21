/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTableEntries.h>

@protocol CRKTableEntries;
@class NSArray, NSString;

@interface CRKTableEntriesWithAddedRow : NSObject <CRKTableEntries> {

	id<CRKTableEntries> mOrigin;
	unsigned long long mIndex;
	NSArray* mEntries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)rowCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 entries:(id)arg3 ;
-(unsigned long long)columnCount;
@end

