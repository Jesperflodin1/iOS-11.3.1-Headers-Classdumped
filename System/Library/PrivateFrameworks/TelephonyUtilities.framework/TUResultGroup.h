/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUGroupTitle, NSMutableArray, NSArray;

@interface TUResultGroup : NSObject <NSCopying> {

	TUGroupTitle* _title;
	NSMutableArray* _resultsCache;

}

@property (nonatomic,retain) TUGroupTitle * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultsCache;              //@synthesize resultsCache=_resultsCache - In the implementation block
@property (readonly) NSArray * results; 
@property (readonly) unsigned long long groupType; 
-(void)setTitle:(TUGroupTitle *)arg1 ;
-(TUGroupTitle *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)results;
-(id)initWithTitle:(id)arg1 results:(id)arg2 ;
-(void)removeSearchItem:(id)arg1 ;
-(NSMutableArray *)resultsCache;
-(void)setResultsCache:(NSMutableArray *)arg1 ;
-(unsigned long long)groupType;
@end

