/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHStrokeIdentifier;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSSet;

@interface CHStrokeGroup : NSObject {

	long long _uniqueIdentifier;
	long long _ancestorIdentifier;
	NSSet* _strokeIdentifiers;
	id<CHStrokeIdentifier> _firstStrokeIdentifier;
	id<CHStrokeIdentifier> _lastStrokeIdentifier;
	long long _classification;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long ancestorIdentifier;                              //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                             //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGVector averageWritingOrientation; 
@property (nonatomic,readonly) NSSet * strokeIdentifiers;                                 //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) id<CHStrokeIdentifier> firstStrokeIdentifier;              //@synthesize firstStrokeIdentifier=_firstStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) id<CHStrokeIdentifier> lastStrokeIdentifier;               //@synthesize lastStrokeIdentifier=_lastStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) long long classification;                                  //@synthesize classification=_classification - In the implementation block
+(long long)_newStrokeGroupUniqueIdentifier;
+(BOOL)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2 ;
-(id)init;
-(CGRect)bounds;
-(void)dealloc;
-(id)description;
-(long long)uniqueIdentifier;
-(long long)ancestorIdentifier;
-(id<CHStrokeIdentifier>)firstStrokeIdentifier;
-(id<CHStrokeIdentifier>)lastStrokeIdentifier;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 ;
-(CGVector)averageWritingOrientation;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 ;
-(BOOL)isEquivalentToStrokeGroup:(id)arg1 ;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 classification:(long long)arg5 ;
-(NSSet *)strokeIdentifiers;
-(long long)classification;
@end

