/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _EditScriptIndexedAtom : NSObject {

	long long _editOperation;
	unsigned long long _indexToEdit;
	unsigned long long _indexInArrayB;
	NSString* _replacementText;

}

@property (assign,nonatomic) long long editOperation;                       //@synthesize editOperation=_editOperation - In the implementation block
@property (assign,nonatomic) unsigned long long indexToEdit;                //@synthesize indexToEdit=_indexToEdit - In the implementation block
@property (assign,nonatomic) unsigned long long indexInArrayB;              //@synthesize indexInArrayB=_indexInArrayB - In the implementation block
@property (nonatomic,retain) NSString * replacementText;                    //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(id)description;
-(void)setReplacementText:(NSString *)arg1 ;
-(NSString *)replacementText;
-(long long)editOperation;
-(unsigned long long)indexToEdit;
-(void)setIndexToEdit:(unsigned long long)arg1 ;
-(void)setEditOperation:(long long)arg1 ;
-(void)setIndexInArrayB:(unsigned long long)arg1 ;
-(id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(unsigned long long)indexInArrayB;
@end

