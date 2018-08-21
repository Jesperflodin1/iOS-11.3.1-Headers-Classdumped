/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIDropProposal : NSObject <NSCopying> {

	BOOL _precise;
	BOOL _prefersFullSizePreview;
	unsigned long long _operation;

}

@property (assign,nonatomic) unsigned long long operation;               //@synthesize operation=_operation - In the implementation block
@property (assign,getter=isPrecise,nonatomic) BOOL precise;              //@synthesize precise=_precise - In the implementation block
@property (assign,nonatomic) BOOL prefersFullSizePreview;                //@synthesize prefersFullSizePreview=_prefersFullSizePreview - In the implementation block
+(id)new;
-(id)init;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(BOOL)isPrecise;
-(void)setPrecise:(BOOL)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
@end

