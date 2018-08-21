//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADPreviewCompression : NSObject
{
}

+ (int)readBit:(id)arg1;
+ (unsigned short)readBits:(int)arg1 fromData:(id)arg2;
+ (id)decompressFromBase64Native:(id)arg1;
+ (int)validFlags:(int)arg1;
+ (int)validOperation:(int)arg1;
+ (int)validAlgorithm:(int)arg1;
+ (id)processData:(id)arg1 using:(int)arg2 operation:(int)arg3;
+ (id)decompressFromBase64:(id)arg1 algorithm:(int)arg2;
+ (id)decompressFromBase64:(id)arg1;
+ (id)compressToBase64:(id)arg1 algorithm:(int)arg2;
+ (id)compressToBase64:(id)arg1;
+ (id)decompress:(id)arg1 algorithm:(int)arg2;
+ (id)decompress:(id)arg1;
+ (id)compress:(id)arg1 algorithm:(int)arg2;
+ (id)compress:(id)arg1;

@end
