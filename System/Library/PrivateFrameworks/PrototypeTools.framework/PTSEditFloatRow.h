/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSEditFloatRow : PTSRow {

	unsigned long long _precision;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
-(id)init;
-(id)precision:(unsigned long long)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(Class)rowTableViewCellClass;
-(id)between:(double)arg1 and:(double)arg2 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(unsigned long long)precision;
@end

