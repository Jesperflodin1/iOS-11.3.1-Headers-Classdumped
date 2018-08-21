/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SXComponentLayoutRules : NSObject <NSCopying> {

	BOOL _allowsIntersection;
	BOOL _shouldSpanAllColumns;
	BOOL _allowsSiblingBasedResizing;
	BOOL _shouldIgnoreDocumentMargin;
	unsigned long long _minimumColumnSpan;

}

@property (assign,nonatomic) unsigned long long minimumColumnSpan;              //@synthesize minimumColumnSpan=_minimumColumnSpan - In the implementation block
@property (assign,nonatomic) BOOL allowsIntersection;                           //@synthesize allowsIntersection=_allowsIntersection - In the implementation block
@property (assign,nonatomic) BOOL shouldSpanAllColumns;                         //@synthesize shouldSpanAllColumns=_shouldSpanAllColumns - In the implementation block
@property (assign,nonatomic) BOOL allowsSiblingBasedResizing;                   //@synthesize allowsSiblingBasedResizing=_allowsSiblingBasedResizing - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDocumentMargin;                   //@synthesize shouldIgnoreDocumentMargin=_shouldIgnoreDocumentMargin - In the implementation block
+(id)twoColumnLayoutRules;
+(id)fullWidthLayoutRules;
+(id)bodyComponentLayoutRules;
+(id)defaultLayoutRules;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)minimumColumnSpan;
-(void)setMinimumColumnSpan:(unsigned long long)arg1 ;
-(BOOL)allowsIntersection;
-(void)setAllowsIntersection:(BOOL)arg1 ;
-(BOOL)shouldSpanAllColumns;
-(void)setShouldSpanAllColumns:(BOOL)arg1 ;
-(BOOL)shouldIgnoreDocumentMargin;
-(void)setShouldIgnoreDocumentMargin:(BOOL)arg1 ;
-(BOOL)allowsSiblingBasedResizing;
-(void)setAllowsSiblingBasedResizing:(BOOL)arg1 ;
@end

