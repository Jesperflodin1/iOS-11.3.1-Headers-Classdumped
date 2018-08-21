/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearchReference.h>

@protocol TSKAnnotation;
@class TSWPStorage, TSWPSelection, TSWPSmartField, NSArray, NSString;

@interface TSWPSearchReference : NSObject <TSKSearchReference> {

	TSWPStorage* _storage;
	TSWPSelection* _selection;
	NSRange _smartFieldRange;
	BOOL _refersToSmartField;
	TSWPSmartField* _smartField;
	BOOL _autohideHighlight;
	BOOL _pulseHighlight;
	NSArray* _findHighlights;
	id<TSKAnnotation> annotation;
	CGPoint searchReferencePoint;

}

@property (nonatomic,retain) TSWPSelection * selection;                 //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) NSRange range; 
@property (assign,nonatomic) BOOL refersToSmartField; 
@property (assign,nonatomic) NSRange smartFieldRange; 
@property (nonatomic,retain) TSWPSmartField * smartField; 
@property (nonatomic,readonly) BOOL isInsertionPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights;                  //@synthesize findHighlights=_findHighlights - In the implementation block
@property (assign,nonatomic) BOOL pulseHighlight;                       //@synthesize pulseHighlight=_pulseHighlight - In the implementation block
@property (assign,nonatomic) BOOL autohideHighlight;                    //@synthesize autohideHighlight=_autohideHighlight - In the implementation block
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
+(id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2 ;
+(id)searchReferenceWithStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSWPSelection *)selection;
-(void)setSelection:(TSWPSelection *)arg1 ;
-(id)model;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)isSelectable;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
-(id)storage;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(NSArray *)arg1 ;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1 ;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1 ;
-(BOOL)isInsertionPoint;
-(NSRange)smartFieldRange;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 ;
-(BOOL)refersToSmartField;
-(void)pUpdateSelection;
-(void)setSmartFieldRange:(NSRange)arg1 ;
-(void)setSmartField:(TSWPSmartField *)arg1 ;
-(TSWPSmartField *)smartField;
-(void)setRefersToSmartField:(BOOL)arg1 ;
@end

