//
//  YFClothesM.h
//  WaterFlow
//
//  Created by 李永方 on 15/11/7.
//  Copyright © 2015年 李永方. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YFClothesM : NSObject

///图片
@property (nonatomic, copy) NSString *img;
/// 价格
@property (nonatomic, copy) NSString *price;
/// 宽
@property (nonatomic,assign) NSNumber *w;
/// 高
@property (nonatomic,assign) NSNumber *h;

+(instancetype)ClothesWithDict:(NSDictionary *)dic;

-(instancetype)initWithDict: (NSDictionary *)dict;

@end
