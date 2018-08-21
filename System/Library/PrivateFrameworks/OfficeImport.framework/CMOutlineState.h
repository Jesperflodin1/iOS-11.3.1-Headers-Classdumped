/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WDListDefinition, WDList;

@interface CMOutlineState : NSObject {

	NSMutableArray* _counters;
	WDListDefinition* _listDefinition;
	WDList* _currentList;

}

@property (readonly) WDListDefinition * listDefinition;              //@synthesize listDefinition=_listDefinition - In the implementation block
@property (retain) WDList * currentList;                             //@synthesize currentList=_currentList - In the implementation block
-(id)init;
-(void)reset;
-(unsigned long long)counterAtLevel:(unsigned char)arg1 ;
-(void)setCurrentList:(WDList *)arg1 ;
-(id)levelDescriptionAtIndex:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(WDListDefinition *)listDefinition;
-(unsigned long long)levelCount;
-(id)initWithListDefinition:(id)arg1 ;
-(void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2 ;
-(WDList *)currentList;
@end

