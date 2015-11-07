//
//  YFClothesM.m
//  WaterFlow
//
//  Created by 李永方 on 15/11/7.
//  Copyright © 2015年 李永方. All rights reserved.
//

#import "YFClothesM.h"

@implementation YFClothesM


    +(instancetype)ClothesWithDict:(NSDictionary *)dic {
    
    
        return [[self alloc]initWithDict:dic];
    
    }
    
    -(instancetype)initWithDict: (NSDictionary *)dict {
    
        if (self = [super init]) {
            
            [self setValuesForKeysWithDictionary:dict];
            
        }
    
        return  self;
}
@end
